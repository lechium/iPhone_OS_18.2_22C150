//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBInspecting;

__attribute__((visibility("hidden")))
@interface AUPBClientConnection : NSObject
{
    NSXPCConnection *xpcconnection;	// 8 = 0x8
    id <AUPBInspecting> proxyInterface;	// 16 = 0x10
}

@property(retain, nonatomic) id <AUPBInspecting> proxyInterface; // @synthesize proxyInterface;
@property(retain, nonatomic) NSXPCConnection *xpcconnection; // @synthesize xpcconnection;

@end

