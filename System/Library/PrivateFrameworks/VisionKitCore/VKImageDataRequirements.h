//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKImageDataRequirements : NSObject
{
    NSString *_uti;	// 8 = 0x8
    unsigned long long _maxLength;	// 16 = 0x10
    unsigned long long _minLength;	// 24 = 0x18
    unsigned long long _maxDataLength;	// 32 = 0x20
}

+ (id)stickerThumbnailRequirements;	// IMP=0x00400000000dbe86
+ (id)stickerRequirements;	// IMP=0x00400000000dbde6
- (void).cxx_destruct;	// IMP=0x00000000000dbf7d
@property(nonatomic) unsigned long long maxDataLength; // @synthesize maxDataLength=_maxDataLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;

@end

