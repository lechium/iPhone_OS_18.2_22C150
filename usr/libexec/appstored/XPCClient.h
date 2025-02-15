//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface XPCClient : NSObject
{
    NSString *_clientID;	// 8 = 0x8
    NSData *_auditTokenData;	// 16 = 0x10
    NSString *_bundlePath;	// 24 = 0x18
    NSString *_clientVersion;	// 32 = 0x20
    int _pid;	// 40 = 0x28
    NSString *_userAgent;	// 48 = 0x30
    NSString *_clientIDHeader;	// 56 = 0x38
}

+ (id)clientIDForConnection:(id)arg1;	// IMP=0x00400000000ead88
- (void).cxx_destruct;	// IMP=0x00200000000eaf84
@property(readonly) NSString *clientIDHeader; // @synthesize clientIDHeader=_clientIDHeader;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000eaee5
- (unsigned long long)hash;	// IMP=0x00100000000eaecf
- (id)description;	// IMP=0x00100000000eae49
@property(readonly) NSString *userAgent;
@property(readonly) NSString *clientVersion;
@property(readonly) NSString *clientID;
@property(readonly) NSString *bundlePath;
@property(readonly) NSData *auditTokenData;
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000eab88
- (id)initWithApplicationID:(id)arg1;	// IMP=0x00100000000ea8ec
- (id)init;	// IMP=0x00100000000ea8d8

@end

