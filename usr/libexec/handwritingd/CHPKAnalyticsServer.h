//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface CHPKAnalyticsServer : NSObject
{
    _Bool _isListening;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (id)sharedAnalyticsServer;	// IMP=0x002000000000ad10
- (void).cxx_destruct;	// IMP=0x002000000000afc0
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000ae90
- (void)resumeConnectionIfIdle;	// IMP=0x001000000000ae10
- (id)init;	// IMP=0x001000000000ad80
- (void)dealloc;	// IMP=0x001000000000acb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

