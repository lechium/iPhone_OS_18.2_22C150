//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AAFPromise, FAFamilyCircle, FAFamilyCircleCacheResponse, NSString;

@protocol FAFamilyCircleCacheProtocol <NSObject>
- (AAFPromise *)invalidate;
- (AAFPromise *)updateWithFamilyCircle:(FAFamilyCircle *)arg1 serverTag:(NSString *)arg2;
- (FAFamilyCircleCacheResponse *)loadWithError:(id *)arg1;
- (AAFPromise *)load;
@end

