//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006a52c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a4b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a4a4
- (id)copyRequestProperties;	// IMP=0x001000000006a487
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x001000000006a433
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x001000000006a3df
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x001000000006a38b
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x001000000006a32f
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x001000000006a2ab
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x001000000006a121

@end
