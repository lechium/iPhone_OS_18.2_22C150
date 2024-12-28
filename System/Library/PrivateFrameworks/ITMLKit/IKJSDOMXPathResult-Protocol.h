//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNode, NSString;

@protocol IKJSDOMXPathResult <JSExport>
@property(readonly, nonatomic) long long snapshotLength;
@property(readonly, nonatomic) _Bool invalidIteratorState;
@property(readonly, nonatomic) __weak IKDOMNode *singleNodeValue;
@property(readonly, nonatomic) _Bool booleanValue;
@property(readonly, nonatomic) __weak NSString *stringValue;
@property(readonly, nonatomic) long long numberValue;
@property(readonly, nonatomic) long long resultType;
- (IKDOMNode *)snapshotItem:(long long)arg1;
- (IKDOMNode *)iterateNext;
@end
