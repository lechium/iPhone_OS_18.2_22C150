//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class NSString, UIImage, WebBookmark;

@protocol WBSStartPageIconProxy <NSObject>
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)setIconFromBookmark:(WebBookmark *)arg1;
@end

