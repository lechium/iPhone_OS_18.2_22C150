//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FocusUI/SAElementIdentifying-Protocol.h>

@class NSString;
@protocol SAElementHosting, SAElementViewProviding;

@protocol SAElement <SAElementIdentifying>
- (id <SAElementViewProviding>)viewProvider;

@optional
@property(nonatomic) __weak id <SAElementHosting> elementHost;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SAElementHosting>",?,W,N

- (NSString *)elementDescription;
@end
