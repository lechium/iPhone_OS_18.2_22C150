//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class EMMessageRepository, EMQuery;

@protocol EMMessageRepositoryCountQueryObserver <NSObject>
- (void)messageRepository:(EMMessageRepository *)arg1 query:(EMQuery *)arg2 countDidChange:(long long)arg3;
@end

