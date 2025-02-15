//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, NSString, SXComponentClassification, SXComponentTextStyle, SXComponents;
@protocol SXAutoPlacement, SXComponent, SXComponentLayout, SXComponentStyle, SXComponentTextStyle, SXDocumentStyle, SXImageResource, SXResource, SXTextStyle;

@protocol SXDOMObjectProviding <NSObject>
@property(readonly, nonatomic) id <SXAutoPlacement> autoPlacement;
@property(readonly, nonatomic) SXComponents *components;
@property(readonly, nonatomic) id <SXDocumentStyle> documentStyle;
- (id <SXImageResource>)imageResourceForIdentifier:(NSString *)arg1;
- (id <SXResource>)resourceForIdentifier:(NSString *)arg1;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2 component:(id <SXComponent>)arg3;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 classification:(SXComponentClassification *)arg2 component:(id <SXComponent>)arg3;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifiers:(NSArray *)arg1 component:(id <SXComponent>)arg2;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 component:(id <SXComponent>)arg2;
- (id <SXTextStyle>)textStyleForIdentifier:(NSString *)arg1 component:(id <SXComponent>)arg2;
- (id <SXComponentStyle>)componentStyleForComponent:(id <SXComponent>)arg1;
- (id <SXComponentLayout>)componentLayoutForIdentifier:(NSString *)arg1;
@end

