//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/CNUIUserActionListDataSource-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol CNUIUserActionDisambiguationView;

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
- (UIImage *)contactActionsView:(id <CNUIUserActionDisambiguationView>)arg1 imageForActionCategory:(NSString *)arg2;
- (NSArray *)categoriesForContactActionsView:(id <CNUIUserActionDisambiguationView>)arg1;
@end
