//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PFFairPlayAsset : NSObject
{
    MISSING_TYPE *adamID;	// 8 = 0x8
    MISSING_TYPE *avAsset;	// 16 = 0x10
    MISSING_TYPE *keyStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000230e10
- (id)init;	// IMP=0x0000000000230db0
@property(nonatomic, readonly) _Bool isOfflineAsset;
- (id)initWithAdamID:(long long)arg1 avAsset:(id)arg2;	// IMP=0x0000000000230780
@property(nonatomic, readonly) NSString *description;

@end
