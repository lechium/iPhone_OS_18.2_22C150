//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessStringPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate
{
    NSString *_beforeTranslocationBundlePath;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033b75
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000033ae4
- (id)beforeTranslocationBundlePath;	// IMP=0x0000000000033ad2
- (id)init;	// IMP=0x0000000000033a90
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000033a4e

@end

