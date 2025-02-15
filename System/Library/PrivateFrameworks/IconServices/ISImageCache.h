//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISImageCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSData *_latestValidationToken;	// 16 = 0x10
    NSMutableDictionary *_imageBagsByDescriptor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000105f4
@property(retain) NSMutableDictionary *imageBagsByDescriptor; // @synthesize imageBagsByDescriptor=_imageBagsByDescriptor;
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly) NSData *latestValidationToken; // @synthesize latestValidationToken=_latestValidationToken;
- (id)allImages;	// IMP=0x00000000000103ba
- (id)debugDescription;	// IMP=0x000000000001017b
- (void)setImage:(id)arg1 forDescriptor:(id)arg2;	// IMP=0x000000000001005c
- (id)imageForDescriptor:(id)arg1;	// IMP=0x000000000000ff67
- (id)init;	// IMP=0x000000000000ff0a

@end

