//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSDictionary, NSHTTPURLResponse;

@interface CKDURLResponseOverrideProxy : NSProxy
{
    NSHTTPURLResponse *_realResponse;	// 8 = 0x8
    long long _statusCode;	// 16 = 0x10
    NSDictionary *_responseHeaderOverrides;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b6b1b
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000b6b06
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x00000000000b6a81
- (id)allHeaderFields;	// IMP=0x00000000000b69e8
- (long long)statusCode;	// IMP=0x00000000000b69d7
- (id)initWithResponse:(id)arg1 overrides:(id)arg2;	// IMP=0x00000000000b68ec

@end
