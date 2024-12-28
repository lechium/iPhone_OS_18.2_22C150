//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

__attribute__((visibility("hidden")))
@interface _NSCFURLProtocol : NSURLProtocol
{
    struct _CFURLProtocol *_prot;	// 32 = 0x20
    struct NSCFURLProtocolClient *_client;	// 40 = 0x28
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x0060000000088f7d
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;	// IMP=0x0060000000088f06
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0060000000088e83
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000088e59
+ (_Bool)canInitWithTask:(id)arg1;	// IMP=0x0060000000088e0a
+ (const struct InternalProtocolImplementation *)_cf_internalImpl;	// IMP=0x0060000000088e01
- (void)stopLoading;	// IMP=0x0000000000088a06
- (void)startLoading;	// IMP=0x0000000000088988
- (void)dealloc;	// IMP=0x000000000008892c
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x0000000000088805

@end
