//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/SGOrigin.h>

@interface SGOrigin (Internal)
+ (id)originForDuplicateKey:(id)arg1 entity:(id)arg2 parent:(id)arg3 store:(id)arg4;	// IMP=0x005000000015775c
+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;	// IMP=0x00500000001572bc
+ (unsigned long long)originTypeForEntityType:(long long)arg1;	// IMP=0x00500000001571b6
- (void)addRecipientDetailsFromOriginatingMessageEntity:(id)arg1 entity:(id)arg2 store:(id)arg3;	// IMP=0x0010000000156e4c
- (void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1;	// IMP=0x0010000000156c02
- (void)addDetailsFromOriginatingInteractionEntity:(id)arg1;	// IMP=0x0010000000156b3e
- (void)addDetailsFromOriginatingCalendarEntity:(id)arg1;	// IMP=0x0010000000156adb
- (void)addDetailsFromOriginatingContactEntity:(id)arg1;	// IMP=0x0010000000156a56
- (void)addDetailsFromOriginatingMessageEntity:(id)arg1;	// IMP=0x00100000001569f3
- (void)addDetailsFromParticipantsOfEntity:(id)arg1;	// IMP=0x00100000001569a8
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;	// IMP=0x00100000001568e8
@end

