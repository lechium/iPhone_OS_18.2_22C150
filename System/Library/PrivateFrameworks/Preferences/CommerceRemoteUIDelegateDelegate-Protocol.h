//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/NSObject-Protocol.h>

@class CommerceRemoteUIDelegate, NSError, RUIObjectModel, RUIPage;

@protocol CommerceRemoteUIDelegateDelegate <NSObject>
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)commerceDelegateDidCancel:(CommerceRemoteUIDelegate *)arg1;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 page:(RUIPage *)arg3;
@end
