//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class UIBlurEffect, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying>
{
    UIImage *_image;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    UIBlurEffect *_blurEffect;	// 32 = 0x20
    long long _vibrancyStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004a9b38
@property(nonatomic) long long vibrancyStyle; // @synthesize vibrancyStyle=_vibrancyStyle;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a9991

@end

