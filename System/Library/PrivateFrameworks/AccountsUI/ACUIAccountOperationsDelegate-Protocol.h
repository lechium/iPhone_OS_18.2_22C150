//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACAccount, ACDataclassAction, ACUIAccountOperationsHelper, ACUIDataclassActionPicker, NSArray, NSError, NSString;

@protocol ACUIAccountOperationsDelegate <NSObject>
- (ACDataclassAction *)operationsHelper:(ACUIAccountOperationsHelper *)arg1 desiredDataclassActionFromPicker:(ACUIDataclassActionPicker *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didRemoveAccount:(ACAccount *)arg2 withSuccess:(_Bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willRemoveAccount:(ACAccount *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didSaveAccount:(ACAccount *)arg2 withSuccess:(_Bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willSaveAccount:(ACAccount *)arg2;

@optional
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didLoadSaveActions:(NSArray *)arg2 forDataclass:(NSString *)arg3 withAccount:(ACAccount *)arg4 error:(NSError *)arg5;
- (long long)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveOrDisableAccount:(ACAccount *)arg2;
- (_Bool)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveAccount:(ACAccount *)arg2;
@end

