//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDMovePhotosOperation, CKMovePhotosChange, CKRecord;

@interface CKDMoveRecordHandler
{
    CKMovePhotosChange *_moveChange;	// 8 = 0x8
    CKRecord *_serverMoveMarkerRecord;	// 16 = 0x10
}

+ (id)moveHandlerWithMoveChange:(id)arg1 operation:(id)arg2;	// IMP=0x0060000000201d15
- (void).cxx_destruct;	// IMP=0x0000000000201e41
@property(retain, nonatomic) CKRecord *serverMoveMarkerRecord; // @synthesize serverMoveMarkerRecord=_serverMoveMarkerRecord;
@property(retain, nonatomic) CKMovePhotosChange *moveChange; // @synthesize moveChange=_moveChange;
@property(retain, nonatomic) CKRecord *serverDestinationRecord;
- (id)record;	// IMP=0x0000000000201d83
- (id)_initWithMoveChange:(id)arg1 operation:(id)arg2;	// IMP=0x0000000000201c8b

// Remaining properties
@property(nonatomic) __weak CKDMovePhotosOperation *operation; // @dynamic operation;

@end
