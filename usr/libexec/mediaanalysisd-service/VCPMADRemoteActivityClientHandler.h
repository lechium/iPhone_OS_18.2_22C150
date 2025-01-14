//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

@interface VCPMADRemoteActivityClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    struct atomic<unsigned int> _taskID;	// 16 = 0x10
    struct atomic<double> _progress;	// 24 = 0x18
}

+ (void)notifyServicePID;	// IMP=0x0040000000119340
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0010000000119227
+ (id)serviceName;	// IMP=0x0010000000118e40
- (void).cxx_destruct;	// IMP=0x002000000011b4f7
- (void)wakeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000011b443
- (void)cancelActivity;	// IMP=0x001000000011b301
- (void)startActivityWithType:(unsigned long long)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000119602
- (void)handleLostConnection;	// IMP=0x001000000011928c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000118e54

@end

