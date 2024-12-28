//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOMobileAssetResourceServer : GEOServer
{
    double _lastCorruptMessage;	// 8 = 0x8
}

+ (unsigned long long)launchMode;	// IMP=0x00200000000173ad
+ (id)identifier;	// IMP=0x00100000000173a0
- (void)purgeDiskCacheWithRequest:(id)arg1;	// IMP=0x0020000000039256
- (void)calculateFreeableWithRequest:(id)arg1;	// IMP=0x0010000000039179
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x001000000003915c
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x0010000000039145
- (unsigned long long)_processPurgableResourcesForUrgency:(int)arg1 purgeSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000038b30
- (void)reportCorruptWithRequest:(id)arg1;	// IMP=0x00100000000385cb
- (void)fetchWithRequest:(id)arg1;	// IMP=0x0010000000037428
- (void)updateWithMessage:(id)arg1;	// IMP=0x00100000000373ce
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000003737b
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x00100000000173b8

@end
