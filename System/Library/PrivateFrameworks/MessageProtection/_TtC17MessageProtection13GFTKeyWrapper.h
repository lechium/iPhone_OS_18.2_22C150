//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC17MessageProtection13GFTKeyWrapper : NSObject
{
}

+ (id)wrapSeed:(id)arg1 to:(id)arg2 legacy:(_Bool)arg3 error:(id *)arg4;	// IMP=0x008000000003e900
+ (id)decrypt:(id)arg1 using:(struct __SecKey *)arg2 error:(id *)arg3;	// IMP=0x008000000003e810
+ (id)encrypt:(id)arg1 to:(struct __SecKey *)arg2 error:(id *)arg3;	// IMP=0x008000000003e7f0
+ (id)unwrapWrappedSeed:(id)arg1 legacy:(_Bool)arg2 using:(struct __SecKey *)arg3 error:(id *)arg4;	// IMP=0x008000000003e720
- (void).cxx_destruct;	// IMP=0x000000000003ea30
- (id)init;	// IMP=0x000000000003e9d0

@end

