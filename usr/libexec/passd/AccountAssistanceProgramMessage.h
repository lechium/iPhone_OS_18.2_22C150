//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountAssistanceProgramMessage
{
}

+ (id)_propertySettersForAssistanceProgramMessage;	// IMP=0x00400000004a5ce2
+ (id)databaseTable;	// IMP=0x00100000004a5cd5
+ (void)deleteAssistanceProgramMessagePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004a5c3c
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00100000004a5bcb
+ (id)insertAssistanceProgramMessage:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004a58a6
+ (id)assistanceProgramMessagesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004a5692
- (id)assistanceProgramMessage;	// IMP=0x00400000004a5a96

@end
