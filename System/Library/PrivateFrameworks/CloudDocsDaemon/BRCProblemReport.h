//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCProblemReport : NSObject
{
    NSMutableDictionary *_problems;	// 8 = 0x8
    _Bool _needsSyncUp;	// 16 = 0x10
    int _state;	// 20 = 0x14
    NSNumber *_pendingRequestID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023cab3
- (void).cxx_destruct;	// IMP=0x000000000023d49f
@property(nonatomic) _Bool needsSyncUp; // @synthesize needsSyncUp=_needsSyncUp;
@property(retain, nonatomic) NSNumber *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool shouldResetAfterFixingState;
- (id)description;	// IMP=0x000000000023d176
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;	// IMP=0x000000000023d0f7
- (void)_addProblem:(id)arg1;	// IMP=0x000000000023cfc7
@property(readonly, nonatomic) NSSet *effectedRecordNames;
@property(readonly, nonatomic) NSString *effectiveProblemMessage;
- (int)_effectiveProblemType;	// IMP=0x000000000023caf2
- (int)_priorityForProblemType:(int)arg1;	// IMP=0x000000000023cad5
- (int)_zoneStateForProblemType:(int)arg1;	// IMP=0x000000000023cabb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023ca12
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023c832
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023c803
- (id)initWithProblemReport:(id)arg1;	// IMP=0x000000000023c771
- (id)init;	// IMP=0x000000000023c714

@end

