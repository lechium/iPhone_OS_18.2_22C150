//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCKNotificationInfo : NSObject
{
    _Bool _shouldSendContentAvailable;	// 8 = 0x8
    NSString *_alertLocalizationKey;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x00600000000cdec8
+ (Class)__class;	// IMP=0x00600000000cde78
- (void).cxx_destruct;	// IMP=0x00000000000cdf0d
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(copy, nonatomic) NSString *alertLocalizationKey; // @synthesize alertLocalizationKey=_alertLocalizationKey;

@end
