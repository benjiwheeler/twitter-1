//
//  CellTextView.h
//  Todo
//
//  Created by Adam Tait on 1/26/14.
//  Copyright (c) 2014 Adam Tait. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TweetTextView : NSObject

    // public static methods
    + (UIFont *)defaultFont;
<<<<<<< HEAD
    + (UIFont *)largerFont;
=======
    + (NSLineBreakMode)defaultLineBreakMode;

    // public initializers
    - (id)init;
>>>>>>> updated colors and view layering for ios 7

    // accessors
    - (UITextView *)getTextView;
    - (void)updateContentWithString:(NSString *)content;
    - (int)getLayoutHeightForWidth:(CGFloat)width;

@end
