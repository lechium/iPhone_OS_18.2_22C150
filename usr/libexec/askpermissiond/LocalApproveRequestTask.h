//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface LocalApproveRequestTask : AMSTask
{
    NSString *_itemIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000014036
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)_parseResult:(id)arg1;	// IMP=0x0010000000013a1b
- (id)_serverRequestWithUser:(id)arg1 requestIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001359a
- (id)perform;	// IMP=0x0010000000012f8d
- (id)initWithItemIdentifier:(id)arg1;	// IMP=0x0010000000012f1f

@end
