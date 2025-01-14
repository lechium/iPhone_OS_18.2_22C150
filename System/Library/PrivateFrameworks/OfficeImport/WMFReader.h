//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject
{
    int m_recordsRead;	// 8 = 0x8
    WMFPlayer *m_player;	// 16 = 0x10
    unsigned int m_length;	// 24 = 0x18
    const char *m_pBuffer;	// 32 = 0x20
    unsigned int m_cursor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000036f4dc
- (int)moveDataCursor:(unsigned int)arg1;	// IMP=0x00000000000f72b4
- (int)checkBytesAvailable:(unsigned int)arg1;	// IMP=0x00000000000f6fee
- (int)playRecord;	// IMP=0x00000000000f72c5
- (int)playHeaders;	// IMP=0x00000000000f6f55
- (int)play:(id)arg1;	// IMP=0x00000000000f6e4b
- (id)initWithWMFPlayer:(id)arg1;	// IMP=0x00000000000f6e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

