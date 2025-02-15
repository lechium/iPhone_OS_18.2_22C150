//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriResponse.h>

@protocol SAAceCommand;

@interface ADAcePassthroughSiriResponse : AFSiriResponse
{
    id <SAAceCommand> _replyCommand;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001732a0
- (void).cxx_destruct;	// IMP=0x002000000017328d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001731f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000173175
- (id)replyCommand;	// IMP=0x0010000000173160
- (id)initWithRequest:(id)arg1 replyCommand:(id)arg2;	// IMP=0x00100000001730e8

@end

