//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol ProductPageLookupService
- (void)lookupProductWithURLProductRequest:(NSData *)arg1 reply:(void (^)(SKProductLookupResponse *, NSError *))arg2;
- (void)lookupProductWithParametersProductRequest:(NSData *)arg1 reply:(void (^)(SKProductLookupResponse *, NSError *))arg2;
@end

