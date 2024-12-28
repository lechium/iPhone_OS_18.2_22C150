//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter
{
    NSMutableDictionary *_dict;	// 72 = 0x48
    NSString *inputFilterName;	// 80 = 0x50
}

@property(copy) NSString *inputFilterName; // @synthesize inputFilterName;
@property(retain) NSMutableDictionary *_dict; // @synthesize _dict;
- (id)outputImage;	// IMP=0x00000000001740d1
- (id)dummyImagesForImages:(id)arg1;	// IMP=0x0000000000173b69
- (id)attributes;	// IMP=0x0000000000173b19
- (id)inputKeys;	// IMP=0x0000000000173ac9
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000173a53
- (void)dealloc;	// IMP=0x0000000000173a0c
- (id)init;	// IMP=0x00000000001739a8

@end
