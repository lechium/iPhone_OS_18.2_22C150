//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APKRemoteInspectorCSSAgent;

@protocol APKRemoteInspectorCSSAgentDelegate
- (void)CSSAgent:(APKRemoteInspectorCSSAgent *)arg1 onComputedStylesRequestWithIdentifier:(int)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)CSSAgent:(APKRemoteInspectorCSSAgent *)arg1 onInlineStylesRequestWithIdentifier:(int)arg2 completion:(void (^)(id <APKRemoteInspectorStyleProtocol>, NSError *))arg3;
@end

