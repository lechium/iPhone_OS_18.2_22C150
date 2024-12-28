//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MFMessageActionRule : NSObject
{
    NSArray *_actions;	// 8 = 0x8
}

+ (id)log;	// IMP=0x002000000008d245
- (void).cxx_destruct;	// IMP=0x002000000008e26f
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (unsigned long long)_flagColorForActionFlagColor:(long long)arg1;	// IMP=0x001000000008e24e
- (id)_firstActionsDestination;	// IMP=0x001000000008e178
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008e16d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008e053
- (void)performOperationOnMessages:(id)arg1 withMessageChangeManager:(id)arg2;	// IMP=0x001000000008d4cd
- (_Bool)shouldIncludeInNewMessagesSet;	// IMP=0x001000000008d49a
- (_Bool)canExecuteRuleOnMessage:(id)arg1;	// IMP=0x001000000008d3a1
- (id)initWithMessageActions:(id)arg1;	// IMP=0x001000000008d322

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
