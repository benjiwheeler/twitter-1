//
//  TweetCell.h
//  twitter
//
//  Created by Adam Tait on 1/30/14.
//  Copyright (c) 2014 Adam Tait. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface TweetCell : UITableViewCell

    // public static methods
    + (CGRect)defaultContentFrame;
    + (CGRect)defaultContentFrameWithRetweetHeader;
    + (UILabel *)setupLabelWithFont:(UIFont *)font textColor:(UIColor *)textColor;
    + (UIImageView *)setupImageView;
    + (void)loadImageFromUrl:(NSString *)url imageView:(UIImageView *)imageView;

    // public methods
    - (void)updateContentWithTweet:(Tweet *)tweet;

@end
