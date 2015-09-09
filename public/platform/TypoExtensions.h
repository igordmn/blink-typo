#ifndef TypoExtensions_h
#define TypoExtensions_h

#include "WebString.h"

namespace blink {

class TypoHangingPunctuation {
public:
    virtual ~TypoHangingPunctuation() {}

    virtual float startHangFactor(blink::WebUChar ch) = 0;
    virtual float endHangFactor(blink::WebUChar ch) = 0;
};

class TypoHyphenator {
public:
    virtual ~TypoHyphenator() {}

    /**
     * Механизм должен убрать пробелы/знаки пунктуации в начале/конце слова и возвратить индекс переноса внутри слова,
     * в пределах заданных ограничений
     *
     * @param text текст, включающий слово, которое нужно перенести (обычно это слово вместе с соседними пробелами и знаками пунктуации).
     *             индексы begin и end обозначают границы нужно текста.
     * @param minBreakIndex минимальный индекс, с которого можно перенести строку.
     *                      обычно это второй символ слова.
     * @param maxBreakIndex максимальный индекс, с которого можно перенести строку.
     *                      обычно это символ, уже не вмещающийся в строку.
     * @return Возвращает индекс символа, с которого нужно начать новую строку.
     *         -1, если место переноса не было найдено.
     */
    virtual int hyphenateText(const blink::WebString& language,
            const WebString& text, unsigned int start, unsigned int end,
            unsigned int minBreakIndex, unsigned int maxBreakIndex) = 0;
};

class TypoExtensions {
public:
    virtual ~TypoExtensions() {}

    virtual TypoHyphenator& hyphenator() = 0;
    virtual TypoHangingPunctuation& hangingPunctuation() = 0;
};

} // namespace blink

#endif // TypoExtensions_h
