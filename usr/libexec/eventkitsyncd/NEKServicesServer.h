//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment, NSString, NSXPCListener;

@interface NEKServicesServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NEKEnvironment *_environment;	// 16 = 0x10
}

+ (id)log;	// IMP=0x002000000000aee2
- (void).cxx_destruct;	// IMP=0x002000000000b413
@property(retain, nonatomic) NEKEnvironment *environment; // @synthesize environment=_environment;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000b05f
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000000af3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
