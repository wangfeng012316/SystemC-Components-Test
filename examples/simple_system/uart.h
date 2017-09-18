/*******************************************************************************
 * Copyright 2017 eyck@minres.com
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations under
 * the License.
 ******************************************************************************/

#ifndef _UART_H_
#define _UART_H_

#include "gen/uart_regs.h"

namespace sysc {

class uart: public uart_regs<> {
public:
    SC_HAS_PROCESS(uart);
    sc_core::sc_in<sc_core::sc_time> clk_i;
    uart(sc_core::sc_module_name nm);
    virtual ~uart();
protected:
    void clock_cb();
};

} /* namespace sysc */

#endif /* _UART_H_ */
