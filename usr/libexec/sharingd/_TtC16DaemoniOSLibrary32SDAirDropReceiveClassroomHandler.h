//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SDAirDropAlertManagerDelegate;

@interface _TtC16DaemoniOSLibrary32SDAirDropReceiveClassroomHandler : NSObject
{
    MISSING_TYPE *stateMachine;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *classroomDelegate;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *continuations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000002b8630
- (id)init;	// IMP=0x00100000002b85d0
- (void)finishedEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000002b8500
- (void)errorEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000002b76c0
- (void)cancelEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000002b7370
- (void)progressEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000002b7100
- (void)askEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x00100000002b70e0
@property(nonatomic) __weak id <SDAirDropAlertManagerDelegate> classroomDelegate; // @synthesize classroomDelegate;
@property(nonatomic) __weak id <SDAirDropAlertManagerDelegate> delegate; // @synthesize delegate;

@end
