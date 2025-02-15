//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
}

- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x0000000000182667
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;	// IMP=0x000000000018217d
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;	// IMP=0x0000000000181c49
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;	// IMP=0x0000000000181835
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x0000000000181470
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000181451
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000181432
- (void)dealloc;	// IMP=0x00000000001813ef
- (void)teardown;	// IMP=0x0000000000181362
- (id)init;	// IMP=0x0000000000181273

@end

