//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPBaseTemplateProviding-Protocol.h>

@class CPAssistantCellConfiguration, CPListTemplate, NSArray, NSUUID, UIImage;

@protocol CPListTemplateProviding <CPBaseTemplateProviding>
- (void)updateSectionHeaderImage:(UIImage *)arg1 forSectionIdentifier:(NSUUID *)arg2;
- (void)updateAssistantCellConfiguration:(CPAssistantCellConfiguration *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)reloadItems:(NSArray *)arg1;
- (void)reloadTemplate:(CPListTemplate *)arg1;
@end
