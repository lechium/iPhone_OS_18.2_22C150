//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x002000000008e2df
@property(readonly) SinfsArray *sinfsArray;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (id)sinfForIdentifier:(long long)arg1;	// IMP=0x001000000008e179
@property(readonly) SinfsArray *pinfsArray;
@property(readonly, getter=isDRMFree) _Bool DRMFree;
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x001000000008e024
- (void)dealloc;	// IMP=0x001000000008dfe9
- (id)initWithSinfArray:(id)arg1;	// IMP=0x001000000008de18
- (id)init;	// IMP=0x001000000008de04

@end

