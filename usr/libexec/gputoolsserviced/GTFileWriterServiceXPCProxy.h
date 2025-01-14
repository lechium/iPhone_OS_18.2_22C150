//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GTXPCConnection;

@interface GTFileWriterServiceXPCProxy : NSObject
{
    id <GTXPCConnection> _connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001023d
- (void)writeFileData:(id)arg1 sessionID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000100e5
- (void)beginTransferSessionWithFileEntries:(id)arg1 basePath:(id)arg2 toDevice:(id)arg3 options:(id)arg4 sessionID:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000fed2
- (void)startTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000fc87
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000fa68
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000000f9e3
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x001000000000f862

@end

