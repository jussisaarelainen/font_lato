#pragma once

namespace font_lato {

    using Font = juce::Font;

    const Font &getFontRegular();
    const Font &getFontBold();
    
    inline const Font &getFont(bool isBold = false)
    {
        return isBold ? getFontBold() : getFontRegular();
    }

}
