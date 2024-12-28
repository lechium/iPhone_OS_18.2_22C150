//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;	// 8 = 0x8
    GEOServer *_server;	// 16 = 0x10
}

+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;	// IMP=0x006000000148a7c0
+ (id)proxyForClass:(Class)arg1;	// IMP=0x006000000148a763
- (void).cxx_destruct;	// IMP=0x000000000148ab2a
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;	// IMP=0x000000000148aaa8
- (unsigned long long)hash;	// IMP=0x000000000148aa92
- (_Bool)isEqualToServerProxy:(id)arg1;	// IMP=0x000000000148aa81
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000148aa28
- (void)startServerWithDaemon:(id)arg1;	// IMP=0x000000000148a872
- (void)_setServer:(id)arg1;	// IMP=0x000000000148a861

@end
