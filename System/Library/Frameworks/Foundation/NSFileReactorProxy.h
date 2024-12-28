//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    id _reactorID;	// 16 = 0x10
    NSFileAccessNode *_itemLocation;	// 24 = 0x18
    unsigned int _effectiveUserIdentifier;	// 32 = 0x20
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000000912eab
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000912f71
- (id)_clientProxy;	// IMP=0x0000000000912f69
- (_Bool)allowedForURL:(id)arg1;	// IMP=0x0000000000912ea3
- (id)description;	// IMP=0x0000000000912e8a
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x0000000000912d1a
- (void)invalidate;	// IMP=0x0000000000912d14
- (void)forwardUsingProxy:(id)arg1;	// IMP=0x0000000000912d0e
- (id)itemLocation;	// IMP=0x0000000000912cf7
- (void)setItemLocation:(id)arg1;	// IMP=0x0000000000912cf1
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;	// IMP=0x0000000000912cc8
- (id)client;	// IMP=0x0000000000912cb1
- (void)dealloc;	// IMP=0x0000000000912c44
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;	// IMP=0x0000000000912bb8

@end
