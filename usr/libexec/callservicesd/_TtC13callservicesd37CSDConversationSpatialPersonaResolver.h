//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13callservicesd37CSDConversationSpatialPersonaResolver : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *mode;	// 16 = 0x10
    MISSING_TYPE *groupUUID;	// 0 = 0x0
    MISSING_TYPE *localParticipantID;	// 0 = 0x0
    MISSING_TYPE *localGenerationCounter;	// 3 = 0x3
    MISSING_TYPE *localParticipantState;	// 136 = 0x88
    MISSING_TYPE *participantState;	// 0 = 0x0
    MISSING_TYPE *forceLocalParticipantState;	// 0 = 0x0
    MISSING_TYPE *initialParticipantIdentifiers;	// 0 = 0x0
    MISSING_TYPE *joinedGenerationCounter;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000256a81
- (id)init;	// IMP=0x0010000000256a2a
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000256695
@property(nonatomic) long long localParticipantState; // @synthesize localParticipantState;
@property(nonatomic) unsigned long long localGenerationCounter; // @synthesize localGenerationCounter;
- (void)removeParticipantWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000025935f
- (_Bool)upsertWithParticipantID:(unsigned long long)arg1 generationID:(unsigned long long)arg2 spatialPersonaState:(long long)arg3;	// IMP=0x00100000002592d5
- (unsigned long long)setLocalSpatialPersonaWithEnabled:(_Bool)arg1;	// IMP=0x001000000025841f
- (void)configWithLocalParticipantID:(unsigned long long)arg1 groupUUID:(id)arg2 activeParticipantIdentifiers:(id)arg3;	// IMP=0x0010000000257ccc
- (void)reset;	// IMP=0x00100000002577b1
@property(nonatomic, readonly) long long conversationState;
@property(nonatomic, readonly) unsigned long long generationCounter;
@property(nonatomic, readonly) NSString *description;
- (id)participantStateStrWithTruncate:(_Bool)arg1;	// IMP=0x001000000025952f

@end
