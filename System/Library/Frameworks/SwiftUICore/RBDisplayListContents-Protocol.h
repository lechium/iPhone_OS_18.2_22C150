//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUICore/NSObject-Protocol.h>
#import <SwiftUICore/RBDecodable-Protocol.h>
#import <SwiftUICore/RBEncodable-Protocol.h>

@class NSData, NSDictionary, NSString;
@protocol RBDecoderDelegate, RBDisplayListContents;

@protocol RBDisplayListContents <NSObject, RBEncodable, RBDecodable>
+ (id <RBDisplayListContents>)decodedObjectWithData:(NSData *)arg1 delegate:(id <RBDecoderDelegate>)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSString *xmlDescription;
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)renderInContext:(struct CGContext *)arg1 options:(NSDictionary *)arg2;
- (void)drawInState:(void *)arg1;
@end
