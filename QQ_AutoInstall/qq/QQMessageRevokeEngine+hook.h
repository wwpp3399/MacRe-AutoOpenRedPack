//
//  QQMessageRevokeEngine+hook.h
//  qq
//
//  Created by Mac on 2018/11/30.
//  Copyright © 2018 Mac. All rights reserved.
//

#import "QQMessageRevokeEngine.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (QQMessageRevokeEngineHook)
+ (void)hook_revokeMessage;
@end

NS_ASSUME_NONNULL_END
