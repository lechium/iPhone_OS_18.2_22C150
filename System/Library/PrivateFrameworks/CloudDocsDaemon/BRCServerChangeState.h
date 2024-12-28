//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCServerChangeState : NSObject
{
    NSDate *_lastSyncDownDate;	// 8 = 0x8
    long long _lastSyncDownStatus;	// 16 = 0x10
    CKServerChangeToken *_changeToken;	// 24 = 0x18
    unsigned long long _clientRequestID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000376da6
- (void).cxx_destruct;	// IMP=0x00000000003770e7
@property(nonatomic) unsigned long long clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(nonatomic) long long lastSyncDownStatus; // @synthesize lastSyncDownStatus=_lastSyncDownStatus;
@property(retain) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000377039
- (id)initWithServerSyncState:(id)arg1;	// IMP=0x0000000000376f8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000376ebc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000376dae
- (void)forgetClientRequestID;	// IMP=0x0000000000376d98
- (void)forgetChangeTokens;	// IMP=0x0000000000376d3f
- (void)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 caughtUp:(_Bool)arg3;	// IMP=0x0000000000376c82
@property(readonly, nonatomic) _Bool hasNeverSyncedDown;
- (id)description;	// IMP=0x0000000000376c34
- (id)descriptionWithContext:(id)arg1;	// IMP=0x00000000003769dc

@end
