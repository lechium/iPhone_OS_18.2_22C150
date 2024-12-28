//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSURLSessionTaskHTTPAuthenticator : NSObject
{
    NSSet *_statusCodes;	// 8 = 0x8
}

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;	// IMP=0x0010000000236700
@property(copy) NSSet *statusCodes; // @synthesize statusCodes=_statusCodes;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000236689
- (void)dealloc;	// IMP=0x0000000000236649
- (id)initWithStatusCodes:(id)arg1;	// IMP=0x00000000002365f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002365e8

@end
