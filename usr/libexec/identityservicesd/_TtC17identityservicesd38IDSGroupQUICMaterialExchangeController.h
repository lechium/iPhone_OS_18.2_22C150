//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17identityservicesd38IDSGroupQUICMaterialExchangeController : NSObject
{
    MISSING_TYPE *q;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *l;	// 6744 = 0x1a58
    MISSING_TYPE *cryptoHandler;	// 6384158 = 0x616a1e
    MISSING_TYPE *service;	// 0 = 0x0
    MISSING_TYPE *sessionID;	// 2147484680 = 0x80000408
    MISSING_TYPE *handlers;	// 1919052108 = 0x7262694c
    MISSING_TYPE *desired;	// 1835102790 = 0x6d617246
    MISSING_TYPE *currentlySent;	// 1127183211 = 0x432f736b
    MISSING_TYPE *currentlyAcked;	// 1802661751 = 0x6b726f77
    MISSING_TYPE *lock;	// 1870095725 = 0x6f77656d
    MISSING_TYPE *setGenerationCount;	// 1952796230 = 0x74654e46
    MISSING_TYPE *sendGenerationCount;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000004fd5e0
- (id)init;	// IMP=0x00100000004fd580
- (id)takeAllCurrentMaterials;	// IMP=0x00100000004fbc30
- (void)invalidate;	// IMP=0x00100000004fbb90
- (void)removeHandler:(id)arg1;	// IMP=0x00100000004fbac0
- (void)addHandler:(id)arg1;	// IMP=0x00100000004fb9e0
- (void)sendDesiredMaterialsIfNeeded;	// IMP=0x00100000004f81a0

@end

